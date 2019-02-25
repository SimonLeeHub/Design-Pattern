/*!
* \brief 外部迭代器
* 
* 外部迭代器必须维护它在遍历中的位置，以便
* 客户可以通过调用hasNext()和next()来驱动遍历
* 类里的stack即为为了维护位置而创建的堆栈
* \author Lee 
* \date 2019.02.25
*/
#pragma once
#include "citerator.h"
#include "MenuComponent.h"
#include "CMenu.h"
#include <vector>
#include <map>
typedef std::vector<CMenuComponent*> MenuRoster;
struct MENU
{
	MenuRoster::iterator iter;
	MenuRoster::iterator iter_end;

};
typedef std::vector<MENU> Stack;
class CCompositeIterator :
	public CCIterator
{
public:
	/// \brief 外部迭代器的构造函数
    /// 
    /// 通过传入菜单（vector）的迭代器的首位置和末位置来实现迭代，
    /// 在遍历的过程中，如果遇到CMenu类型的元素，即把该元素
    /// 的迭代器的首位置和末位置压入堆栈
    /// \param iter_begin 菜单（vector）迭代器的首位置
    /// \param iter_end 菜单（vector）迭代器的末位置
    /// \return null
	CCompositeIterator(MenuRoster::iterator iter_begin, MenuRoster::iterator iter_end);
	~CCompositeIterator(void);
	Stack stack;
	/// \brief 判断是否含有下一个菜单树子节点或节点
    /// 
    /// 如果堆栈的大小为零，则说明已经遍历所有菜单树的节点，返回false；
    /// 如果堆栈的大小不为零，则取堆栈的顶层元素（即菜单节点），
    /// 如果取出的顶层元素已遍历过，则从堆栈中删除该顶层元素，
	/// 否则返回true。
    /// \return bool
	bool hasNext(void);
	/// \brief 取出下一个元素
    /// 
    /// 首先判断是否还有元素，如果没有，则返回Null，如果有，则从堆栈中获取顶层元素，继续遍历，
    /// 遍历时如果顶层元素是菜单，不是菜单项，则将该顶层元素压入堆栈，
    /// 无论是菜单还是菜单项，都返回。
	void* next(void);
};

