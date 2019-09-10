#include "calculate_feature.h"
#include <time.h>

int main()
{
	clock_t start1, finish1,start2,finish2;
	start1 = clock();
	get_point_feature("./semantic_voxel_10cm/untermaederbrunnen_station1_xyz_intensity_rgb.txt");
	finish1 = clock();
	double duration1 = (double)(finish1 - start1) / CLOCKS_PER_SEC;
	cout << "The time of calculate features is " << duration1 << endl;
	////Êä³öÌØÕ÷
	//start2 = clock();
	//for (size_t i = 0; i < mul_feature.size(); i++)
	//{
	//	int a = i+1;
	//	stringstream ss;
	//	ss << a;
	//	fstream file;
	//	file.open("./semantic_voxel_10cm/untermaederbrunnen_station3_xyz_intensity_rgb"+ss.str()+".txt", ios::out);
	//	for (size_t j = 0; j < mul_feature[i].size(); j++)
	//	{
	//		file << mul_feature[i][j].e1 << "\t" << mul_feature[i][j].e2 << "\t" << mul_feature[i][j].e3 << "\t"
	//			<< mul_feature[i][j].L_3d << "\t" << mul_feature[i][j].P_3d << "\t" << mul_feature[i][j].S_3d << "\t"
	//			<< mul_feature[i][j].O_3d << "\t" << mul_feature[i][j].A_3d << "\t" << mul_feature[i][j].NUM_3d << "\t"
	//			<< mul_feature[i][j].C_3d << "\t" << mul_feature[i][j].r_3d << "\t" << mul_feature[i][j].diff_z_max << "\t"
	//			<< mul_feature[i][j].std_z << "\t" << mul_feature[i][j].d << endl;
	//	}
	//	file.close();
	//}
	//finish2 = clock();
	//double duration2 = (double)(finish2 - start2) / CLOCKS_PER_SEC;
	//cout << "The time of calculate features is " << duration2 << endl;
	system("pause");
	return 0;
}