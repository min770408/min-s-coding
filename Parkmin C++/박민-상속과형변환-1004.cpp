#include <iostream>
#include <cstdlib>
using namespace std;

class MyData
{
private:
	int m_nData = 0;
public:
	MyData() { }
	virtual ~MyData() {}
	void SetData(int nParam) { m_nData = nParam; }

	int GetData() {
		return m_nData;
	}
};

class MyDataEX : public MyData
{
public:
	void SetData(int nParam) {
		if (nParam > 10) {
			nParam = 10;
		}

		MyData::SetData(nParam);
	}

	void PrintData() {
		cout << "PrintData(): " << GetData() << endl;
	}
};

int main()
{
	MyData *pData = new MyDataEX;
	MyDataEX *pNewData = NULL;

	pData->SetData(15);

	pNewData = static_cast<MyDataEX*>(pData);
	pNewData->PrintData();
	delete pData;

	system("pause");
	return 0;
}