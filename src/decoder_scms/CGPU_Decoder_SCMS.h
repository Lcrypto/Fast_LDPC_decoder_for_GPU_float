
#include "../decoder_template/CGPUDecoder.h"
#include "./cuda/CUDA_SCMS.h"

class CGPU_Decoder_SCMS : public CGPUDecoder{
/*
private:
    float* host_V;
    float* device_V;
    int*   host_R;
    int*   device_R;
    float* d_MSG_C_2_V;
    float* d_MSG_V_2_C;
    float* d_var_nodes;
    unsigned int* d_nbVariableParParite;
    unsigned int* d_nbPariteParVariable;
    unsigned int* d_transpose;

	unsigned int nb_frames;
	unsigned int sz_nodes;
	unsigned int sz_checks;
	unsigned int sz_msgs;

protected:

*/
public:
//    CHScheduledGpuDecoder();
	CGPU_Decoder_SCMS(int _nb_frames, int block_size, unsigned int n, unsigned int k, unsigned int m );
    ~CGPU_Decoder_SCMS();
    void initialize();
    void decode(float var_nodes[_N], int Rprime_fix[_N], int nombre_iterations);
};

