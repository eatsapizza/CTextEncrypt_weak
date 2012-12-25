class encrypt
{
public:
  
	encrypt();
	encrypt(char letters[70], int count);
	char encr();

	void decrypt();

private:
	char key[70];
	char letters[70];
	int count;
};
