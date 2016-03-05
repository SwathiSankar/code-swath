

struct person
{
  int person_id;
  char *fname;
  char *lname;
  char *email;
};

struct customer
{
  int contact_id;
  char *contact_name;
  char *street;
  char *area;
  char *city;
  struct person *contact_person;
};
