#include "shared_ref.h"
#include <iostream>

using namespace std;
int main() {
	human* sh = new student("ABC", 201302405);
	student* r = (student*) (sh);

	cout << r->get_id() << r->get_name() << r->get_student_id() << endl;

	return 0;
}
