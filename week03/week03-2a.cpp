// week03-2a.cpp �G�X�@�n�g2�� (�g���A�ܶ}�ߡA��²��A�M��N...)
// LeetCode �ǲ߭p�e��8�D 1822. Sign of the product of an Array
// ��}�C���_�ӡA�ݬO���ơA�t�ơA�٬O 0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1; // �]�� 0 ������ơA���|�ܦ�0�A�u��1�̨ġA���ƻ�K����
        for(int i=0; i<nums.size(); i++) { // �ݦ��X�ӼơA�j��]�X��
            ans *= nums[i]; // �C���� nums[i] ���i ans ��
        } // �Ʀr�V���V�j�A1000�ӼƦr�A����@�b�A�N�z���F�A�ҥH�{�����F�A����
        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;
    }
};
