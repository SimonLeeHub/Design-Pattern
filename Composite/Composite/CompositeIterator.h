/*!
* \brief �ⲿ������
* 
* �ⲿ����������ά�����ڱ����е�λ�ã��Ա�
* �ͻ�����ͨ������hasNext()��next()����������
* �����stack��ΪΪ��ά��λ�ö������Ķ�ջ
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
	/// \brief �ⲿ�������Ĺ��캯��
    /// 
    /// ͨ������˵���vector���ĵ���������λ�ú�ĩλ����ʵ�ֵ�����
    /// �ڱ����Ĺ����У��������CMenu���͵�Ԫ�أ����Ѹ�Ԫ��
    /// �ĵ���������λ�ú�ĩλ��ѹ���ջ
    /// \param iter_begin �˵���vector������������λ��
    /// \param iter_end �˵���vector����������ĩλ��
    /// \return null
	CCompositeIterator(MenuRoster::iterator iter_begin, MenuRoster::iterator iter_end);
	~CCompositeIterator(void);
	Stack stack;
	/// \brief �ж��Ƿ�����һ���˵����ӽڵ��ڵ�
    /// 
    /// �����ջ�Ĵ�СΪ�㣬��˵���Ѿ��������в˵����Ľڵ㣬����false��
    /// �����ջ�Ĵ�С��Ϊ�㣬��ȡ��ջ�Ķ���Ԫ�أ����˵��ڵ㣩��
    /// ���ȡ���Ķ���Ԫ���ѱ���������Ӷ�ջ��ɾ���ö���Ԫ�أ�
	/// ���򷵻�true��
    /// \return bool
	bool hasNext(void);
	/// \brief ȡ����һ��Ԫ��
    /// 
    /// �����ж��Ƿ���Ԫ�أ����û�У��򷵻�Null������У���Ӷ�ջ�л�ȡ����Ԫ�أ�����������
    /// ����ʱ�������Ԫ���ǲ˵������ǲ˵���򽫸ö���Ԫ��ѹ���ջ��
    /// �����ǲ˵����ǲ˵�������ء�
	void* next(void);
};

