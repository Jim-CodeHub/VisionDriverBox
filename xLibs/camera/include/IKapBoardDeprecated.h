// clang-format off
/**
\~chinese
 * @file IKapBoardDeprecated.h
 * @brief IKapBoard库头文件(已抛弃接口/宏定义)
*/
/**
\~english
 * @file IKapBoardDeprecated.h
 * @brief IKapBoard library header(Deprecated API/MacroDefine)
 */

#ifndef _IKAP_BOARD_DEPRECATED_H
#define _IKAP_BOARD_DEPRECATED_H

#include "IKapBoardInfoType.h"

 /**
 \~chinese
  * @name 采集卡资源类型
  * @see IKapGetBoardCount
 */
 /**
\~english
 * @name Frame grabber resource type
 * @see IKapGetBoardCount
 */
#define IKBoardUSB30     0x00000001	///< @brief \~chinese USB3.0采集卡 \~english USB3.0 frame grabber
#define IKBoardPCIE      0x00000002	///< @brief \~chinese PCIe采集卡 \~english PCIe frame grabber

 /**
 \~chinese
  * @brief 行数据开始回调事件【已弃用】
  * @note 当第n行数据从相机传入采集卡中时触发该回调事件，此时缓冲区内尚未存在有效的图像数据。仅适用于线扫描相机。
 */
 /**
\~english
 * @brief Line data start callback event [deprecated]
 * @note This callback event is triggered when the N-th line data passes into frame grabber from camera, and there is no
valid image data in the buffer at this time. It is only applicable to line scan cameras.
 */
#define IKEvent_GrabLine (0x00100000)


 /**
 \~chinese
  * @brief CL采集卡像素时钟【RW】【已弃用】
  * @note 本参数表示CL采集卡像素时钟。
 */
 /**
\~english
 * @brief CL frame grabber pixel clock [RW] [deprecated]
 * @note This parameter represents CL frame grabber pixel clock.
 */
#define IKP_PIXEL_CLOCK (0x10000016)

 /**
 \~chinese
  * @brief CL采集卡数据使能【RW】【已弃用】
  * @note 本参数表示CL采集卡数据有效使能标志位。
 */
 /**
\~english
 * @brief CL frame grabber data enable [RW] [deprecated]
 * @note This parameter represents valid enable flag for CL frame grabber data.
 */
#define IKP_DATA_VALID_ENABLE (0x10000017)


 /**
 \~chinese
  * @brief CL采集卡通用输入信号1采样模式【RW】【已弃用】
  * @note 本参数表示CL采集卡通用输入信号1采样模式。
  * 1. CL采集卡通用输入信号1采样模式可选项如下所示：
  * | CL采集卡通用输入信号1采样模式                  |
  * |------------------------------------------------|
  * | IKP_GENERAL_INPUT_SAMPLE_MODE_VAL_ACTIVE_HIGH  |
  * | IKP_GENERAL_INPUT_SAMPLE_MODE_VAL_ACTIVE_LOW   |
  * | IKP_GENERAL_INPUT_SAMPLE_MODE_VAL_RISING_EDGE  |
  * | IKP_GENERAL_INPUT_SAMPLE_MODE_VAL_FALLING_EDGE |
 */
 /**
\~english
 * @brief CL frame grabber general input signal1 sampling mode [RW] [deprecated]
 * @note This parameter represents general input signal1 sampling mode of CL frame grabber.
 * 1. CL frame grabber general input signal1 sampling mode options are as follows:
 * | CL frame grabber general input signal1 sampling mode |
 * |------------------------------------------------------|
 * | IKP_GENERAL_INPUT_SAMPLE_MODE_VAL_ACTIVE_HIGH        |
 * | IKP_GENERAL_INPUT_SAMPLE_MODE_VAL_ACTIVE_LOW         |
 * | IKP_GENERAL_INPUT_SAMPLE_MODE_VAL_RISING_EDGE        |
 * | IKP_GENERAL_INPUT_SAMPLE_MODE_VAL_FALLING_EDGE       |
 */
#define IKP_GENERAL_INPUT1_SAMPLE_MODE (0x1000001e)

 /**
 \~chinese
  * @brief CL采集卡通用输入信号1脉冲保护模式【RW】【已弃用】
  * @note 本参数表示CL采集卡通用输入信号1脉冲保护模式。
  * 1. CL采集卡通用输入信号1脉冲保护模式可选项如下所示：
  * | CL采集卡通用输入信号1脉冲保护模式           |
  * |---------------------------------------------|
  * | IKP_GENERAL_INPUT_PROTECT_MODE_VAL_NOT_USE  |
  * | IKP_GENERAL_INPUT_PROTECT_MODE_VAL_DELETE   |
  * | IKP_GENERAL_INPUT_PROTECT_MODE_VAL_MEMORIZE |
 */
 /**
\~english
 * @brief CL frame grabber general input signal1 pulse protection mode [RW] [deprecated]
 * @note This parameter represents general input signal1 pulse protection mode of CL frame grabber.
 * 1. CL frame grabber general input signal1 pulse protection mode options are as follows:
 * | CL frame grabber general input signal1 pulse protection mode |
 * |--------------------------------------------------------------|
 * | IKP_GENERAL_INPUT_PROTECT_MODE_VAL_NOT_USE                   |
 * | IKP_GENERAL_INPUT_PROTECT_MODE_VAL_DELETE                    |
 * | IKP_GENERAL_INPUT_PROTECT_MODE_VAL_MEMORIZE                  |
 */
#define IKP_GENERAL_INPUT1_PROTECT_MODE (0x1000001f)

 /**
 \~chinese
  * @brief CL采集卡通用输入信号1最小脉冲间隔【RW】【已弃用】
  * @note 本参数表示CL采集卡通用输入信号1最小脉冲间隔。
 */
 /**
\~english
 * @brief CL frame grabber general input signal1 minimum pulse interval [RW] [deprecated]
 * @note This parameter represents the minimum pulse interval for general input signal1 of CL frame grabber.
 */
#define IKP_GENERAL_INPUT1_MINIMUM_INTERVAL (0x10000020)

 /**
 \~chinese
  * @brief CL采集卡通用输入信号2采样模式【RW】【已弃用】
  * @note 本参数表示CL采集卡通用输入信号2采样模式。
  * 1. CL采集卡通用输入信号2采样模式可选项如下所示：
  * | CL采集卡通用输入信号2采样模式                  |
  * |------------------------------------------------|
  * | IKP_GENERAL_INPUT_SAMPLE_MODE_VAL_ACTIVE_HIGH  |
  * | IKP_GENERAL_INPUT_SAMPLE_MODE_VAL_ACTIVE_LOW   |
  * | IKP_GENERAL_INPUT_SAMPLE_MODE_VAL_RISING_EDGE  |
  * | IKP_GENERAL_INPUT_SAMPLE_MODE_VAL_FALLING_EDGE |
 */
 /**
\~english
 * @brief CL frame grabber general input signal2 sampling mode [RW] [deprecated]
 * @note This parameter represents general input signal2 sampling mode of CL frame grabber.
 * 1. CL frame grabber general input signal2 sampling mode options are as follows:
 * | CL frame grabber general input signal2 sampling mode |
 * |------------------------------------------------------|
 * | IKP_GENERAL_INPUT_SAMPLE_MODE_VAL_ACTIVE_HIGH        |
 * | IKP_GENERAL_INPUT_SAMPLE_MODE_VAL_ACTIVE_LOW         |
 * | IKP_GENERAL_INPUT_SAMPLE_MODE_VAL_RISING_EDGE        |
 * | IKP_GENERAL_INPUT_SAMPLE_MODE_VAL_FALLING_EDGE       |
 */
#define IKP_GENERAL_INPUT2_SAMPLE_MODE (0x10000021)

 /**
 \~chinese
  * @brief CL采集卡通用输入信号2脉冲保护模式【RW】【已弃用】
  * @note 本参数表示CL采集卡通用输入信号2脉冲保护模式。
  * 1. CL采集卡通用输入信号2脉冲保护模式可选项如下所示：
  * | CL采集卡通用输入信号2脉冲保护模式           |
  * |---------------------------------------------|
  * | IKP_GENERAL_INPUT_PROTECT_MODE_VAL_NOT_USE  |
  * | IKP_GENERAL_INPUT_PROTECT_MODE_VAL_DELETE   |
  * | IKP_GENERAL_INPUT_PROTECT_MODE_VAL_MEMORIZE |
 */
 /**
\~english
 * @brief CL frame grabber general input signal2 pulse protection mode [RW] [deprecated]
 * @note This parameter represents general input signal2 pulse protection mode of CL frame grabber.
 * 1. CL frame grabber general input signal2 pulse protection mode options are as follows:
 * | CL frame grabber general input signal2 pulse protection mode |
 * |--------------------------------------------------------------|
 * | IKP_GENERAL_INPUT_PROTECT_MODE_VAL_NOT_USE                   |
 * | IKP_GENERAL_INPUT_PROTECT_MODE_VAL_DELETE                    |
 * | IKP_GENERAL_INPUT_PROTECT_MODE_VAL_MEMORIZE                  |
 */
#define IKP_GENERAL_INPUT2_PROTECT_MODE (0x10000022)

 /**
 \~chinese
  * @brief CL采集卡通用输入信号2最小脉冲间隔【RW】【已弃用】
  * @note 本参数表示CL采集卡通用输入信号2最小脉冲间隔。
 */
 /**
\~english
 * @brief CL frame grabber general input signal2 minimum pulse interval [RW] [deprecated]
 * @note This parameter represents the minimum pulse interval for general input signal2 of CL frame grabber.
 */
#define IKP_GENERAL_INPUT2_MINIMUM_INTERVAL (0x10000023)


 /**
 \~chinese
  * @brief CL采集卡编码器脉冲保护模式【RW】【已弃用】
  * @note 本参数表示CL采集卡编码器脉冲保护模式。
  * 1. CL采集卡编码器脉冲保护模式可选项如下所示：
  * | CL采集卡编码器脉冲保护模式                  |
  * |---------------------------------------------|
  * | IKP_SHAFT_ENCODER_PROTECT_MODE_VAL_NOT_USE  |
  * | IKP_SHAFT_ENCODER_PROTECT_MODE_VAL_DELETE   |
  * | IKP_SHAFT_ENCODER_PROTECT_MODE_VAL_MEMORIZE |
 */
 /**
\~english
 * @brief CL frame grabber encoder pulse protection mode [RW] [deprecated]
 * @note This parameter represents CL frame grabber encoder pulse protection mode.
 * 1. CL frame grabber encoder pulse protection mode options are as follows:
 * | CL frame grabber encoder pulse protection mode |
 * |------------------------------------------------|
 * | IKP_SHAFT_ENCODER_PROTECT_MODE_VAL_NOT_USE     |
 * | IKP_SHAFT_ENCODER_PROTECT_MODE_VAL_DELETE      |
 * | IKP_SHAFT_ENCODER_PROTECT_MODE_VAL_MEMORIZE    |
 */
#define IKP_SHAFT_ENCODER1_PROTECT_MODE (0x10000025)

 /**
 \~chinese
  * @brief CL采集卡编码器最小脉冲间隔【RW】【已弃用】
  * @note 本参数表示CL采集卡编码器最小脉冲间隔。
 */
 /**
\~english
 * @brief CL frame grabber encoder minimum pulse interval [RW] [deprecated]
 * @note This parameter represents the minimum pulse interval of CL frame grabber encoder.
 */
#define IKP_SHAFT_ENCODER1_MINIMUM_INTERVAL (0x10000026)

 /**
 \~chinese
  * @brief CL采集卡通用输出信号1输出延时【RW】【已弃用】
  * @note 本参数表示CL采集卡通用输出信号1输出延时。
 */
 /**
\~english
 * @brief CL frame grabber general output signal1 output delay [RW] [deprecated]
 * @note This parameter represents CL frame grabber general output signal1 output delay.
 */
#define IKP_GENERAL_OUTPUT1_DELAY (0x1000003c)

 /**
 \~chinese
  * @brief CL采集卡通用输出信号2输出延时【RW】【已弃用】
  * @note 本参数表示CL采集卡通用输出信号2输出延时。
 */
 /**
\~english
 * @brief CL frame grabber general output signal2 output delay [RW] [deprecated]
 * @note This parameter represents CL frame grabber general output signal2 output delay.
 */
#define IKP_GENERAL_OUTPUT2_DELAY (0x1000003e)

 /**
 \~chinese
  * @brief CL采集卡远距离传输功能【RW】【已弃用】
  * @note 本参数表示CL采集卡远距离传输功能。
  * 1. 该参数主要用于K6采集卡，当传输线缆小于等于7米时关闭该功能，否则开启。
  * 2. CL采集卡远距离传输功能可选项如下所示：
  * | CL采集卡远距离传输功能                |
  * |---------------------------------------|
  * | IKP_CL_LONG_DISTANCE_TRANSMISSION_OFF |
  * | IKP_CL_LONG_DISTANCE_TRANSMISSION_ON  |
 */
 /**
\~english
 * @brief Long distance transmission function of CL frame grabber [RW] [deprecated]
 * @note This parameter represents long distance transmission function of CL frame grabber.
 * 1. This parameter is mainly used for K6 frame grabbers. When transmission cable is less than or equal to 7
meters, this function is turned off, otherwise it is turned on.
 * 2. Long distance transmission function of CL frame grabber options are as follows:
 * | Long distance transmission function of CL frame grabber |
 * |---------------------------------------------------------|
 * | IKP_CL_LONG_DISTANCE_TRANSMISSION_OFF                   |
 * | IKP_CL_LONG_DISTANCE_TRANSMISSION_ON                    |
 */
#define IKP_CL_LONG_DISTANCE_TRANSMISSION (0x20000018)

 /**
 \~chinese
  * @brief CL采集卡长线缆工作模式【RW】【已弃用】
  * @note 本参数表示CL采集卡长线缆工作模式。
  * 1. 使能该模式前，用户首先需要将相机的采集模式配置为自由运行模式，输出模式配置为测试图像，然后调用 IKapPrepareGrab 函数进行图像采集。
 */
 /**
\~english
 * @brief CL frame grabber long cable working mode [RW] [deprecated]
 * @note This parameter represents CL frame grabber long cable working mode.
 * 1. Before enabling this mode, users need to first configure camera's acquisition mode as free run mode, and
video mode as test image, and then call IKapPrepareGrab function to grab images.
 */
#define IKP_CL_LONG_CABLE_WORKING_MODE (0x20000020)

 /**
 \~chinese
  * @brief CXP采集卡超时时间【RW】【已弃用】
  * @note 本参数表示CXP采集卡超时时间。
 */
 /**
\~english
 * @brief CXP frame grabber timeout time [RW] [deprecated]
 * @note This parameter represents CXP frame grabber timeout time.
 */
#define IKP_CXP_FPGA_FRAME_TIMEOUT (0x3000000e)

 /**
 \~chinese
  * @brief CXP采集卡超时时间【RW】【已弃用】
  * @note 本参数表示CXP采集卡超时时间。
 */
 /**
\~english
 * @brief CXP frame grabber timeout time [RW] [deprecated]
 * @note This parameter represents CXP frame grabber timeout time.
 */
#define IKP_CXP_FPGA_FRAME_TIMEOUT_MULTIPLE (0x3000000f)


 ///@{
 /**
 \~chinese
  * @brief CXP采集卡专有信息
  * @deprecated 使用 IKapOpenWithSpecificInfo
  * @see IKapOpenCXP
 */
 /**
\~english
 * @brief CXP frame grabber proprietary information
 * @deprecated Use IKapOpenWithSpecificInfo
 * @see IKapOpenCXP
 */
typedef struct _ikap_cxp_board_info {
    unsigned BoardIndex;    ///< @brief \~chinese 板卡索引 \~english Board Index
    unsigned MasterPort;    ///< @brief \~chinese 主端口号 \~english Main port
    unsigned SlaveCount;    ///< @brief \~chinese 从端口数量 \~english Number of slave ports
    unsigned SlavePort[7];  ///< @brief \~chinese 从端口号 \~english Slave port
    unsigned CameraIndex;   ///< @brief \~chinese 相机索引 \~english Camera index
    unsigned Topology;      ///< @brief \~chinese 相机和采集卡的拓扑连接 \~english Topological connection of camera and frame grabber
    char Reserved[248];     ///< @brief \~chinese 预留字段 \~english Reserved field
} IKAP_CXP_BOARD_INFO, * PIKAP_CXP_BOARD_INFO;
///@}

///@{
/**
\~chinese
 * @brief GVB采集卡专有信息
 * @deprecated 使用 IKapOpenWithSpecificInfo
 * @see IKapOpenGVB
*/
/**
\~english
 * @brief GVB frame grabber proprietary information
 * @deprecated Use IKapOpenWithSpecificInfo
 * @see IKapOpenGVB
 */
typedef struct _ikap_gvb_board_info {
    unsigned BoardIndex;      ///< @brief \~chinese 板卡索引 \~english Board index
    unsigned MasterPort;      ///< @brief \~chinese 主端口号 \~english Main port
    char     MAC[32];         ///< @brief \~chinese MAC地址 \~english MAC address
    char     Ip[32];          ///< @brief \~chinese IP地址 \~english IP address
    char     SubNetMask[32];  ///< @brief \~chinese 子网掩码 \~english Subnet mask
    char     GateWay[32];     ///< @brief \~chinese 默认网关 \~english Default gateway
    unsigned SlaveCount;      ///< @brief \~chinese 从端口数量 \~english Number of slave ports
    unsigned SlavePort[3];    ///< @brief \~chinese 从端口号 \~english Slave port
    unsigned EffectPixel;     ///< @brief \~chinese 有效像素 \~english Effective pixel
    char     Reserved2[140];  ///< @brief \~chinese 预留字段 \~english Reserved field
} IKAP_GVB_BOARD_INFO, * PIKAP_GVB_BOARD_INFO;
///@}


#ifdef __cplusplus
extern "C" {
#endif  // __cplusplus

/**
\~chinese
 * @brief 打开CXP采集卡
 * @param[in] resourceType 采集卡资源类型
 * @param[in] resourceIndex 采集卡索引
 * @param[in] info CoaXPress采集卡信息
 * @return
 * - Handle: 采集卡设备句柄
 * - INVALID_HANDLE_VALUE (-1): 调用失败
 * - IKStatus_BoardNotFound
 * - IKStatus_AllocMemoryFail
 * - IKStatus_Mutex_Locked
 * - IKStatus_Invalid_Mutex
 * - IKStatus_WinError
 * - IKStatus_InvalidParameter
 * @note 本函数获取指定类型和序号的采集卡设备句柄，同时初始化采集卡。如果多次打开同一采集卡，只有第一次调用会被执行，后续调用会返回打开失败错误。
 * 1. 采集卡资源类型resourceType可选项如下所示：
 * | 采集卡资源类型resourceType |
 * |----------------------------|
 * | IKBoardALL                 |
 * @deprecated 使用 IKapOpenWithSpecificInfo
 * @see IKapClose
*/
 /**
\~english
 * @brief Open CXP frame grabber
 * @param[in] resourceType Frame grabber resource type
 * @param[in] resourceIndex Frame grabber index
 * @param[in] info CoaXPress frame grabber information
 * @return
 * - Handle: Frame grabber device handle
 * - INVALID_HANDLE_VALUE (-1): Call failed
 * - IKStatus_BoardNotFound
 * - IKStatus_AllocMemoryFail
 * - IKStatus_Mutex_Locked
 * - IKStatus_Invalid_Mutex
 * - IKStatus_WinError
 * - IKStatus_InvalidParameter
 * @note This function gets the handle of frame grabber device of the specified type and, index, and initializes frame
grabber at the same time. If the same frame grabber is opened multiple times, only the first call will be executed, and
subsequent calls will return an open failure error.
 * 1. Type of frame grabbers resourceType options are as follows:
 * | Type of frame grabbers resourceType |
 * |-------------------------------------|
 * | IKBoardALL                          |
 * @deprecated Use IKapOpenWithSpecificInfo
 * @see IKapClose
 */
IKAPBOARDDLL HANDLE IKAPBOARD_CC IKapOpenCXP(unsigned resourceType, unsigned resourceIndex, IKAP_CXP_BOARD_INFO info);

/**
\~chinese
 * @brief 打开GVB采集卡
 * @param[in] resourceType 采集卡资源类型
 * @param[in] resourceIndex 采集卡索引
 * @param[in] info GVB采集卡信息
 * @return
 * - Handle: 采集卡设备句柄
 * - INVALID_HANDLE_VALUE (-1): 调用失败
 * - IKStatus_BoardNotFound
 * - IKStatus_AllocMemoryFail
 * - IKStatus_Mutex_Locked
 * - IKStatus_Invalid_Mutex
 * - IKStatus_WinError
 * - IKStatus_InvalidParameter
 * @note 本函数获取指定类型和序号的采集卡设备句柄，同时初始化采集卡。如果多次打开同一采集卡，只有第一次调用会被执行，后续调用会返回打开失败错误。
 * 1. 采集卡资源类型resourceType可选项如下所示：
 * | 采集卡资源类型resourceType |
 * |----------------------------|
 * | IKBoardALL                 |
 * @deprecated 使用 IKapOpenWithSpecificInfo
 * @see IKapClose
*/
 /**
\~english
 * @brief Open GVB frame grabber
 * @param[in] resourceType Frame grabber resource type
 * @param[in] resourceIndex Frame grabber index
 * @param[in] info GVB frame grabber information
 * @return
 * - Handle: Frame grabber device handle
 * - INVALID_HANDLE_VALUE (-1): Call failed
 * - IKStatus_BoardNotFound
 * - IKStatus_AllocMemoryFail
 * - IKStatus_Mutex_Locked
 * - IKStatus_Invalid_Mutex
 * - IKStatus_WinError
 * - IKStatus_InvalidParameter
 * @note This function gets the handle of frame grabber device of the specified type and, index, and initializes frame
grabber at the same time. If the same frame grabber is opened multiple times, only the first call will be executed, and
subsequent calls will return an open failure error.
 * 1. Type of frame grabbers resourceType options are as follows:
 * | Type of frame grabbers resourceType |
 * |-------------------------------------|
 * | IKBoardALL                          |
 * @deprecated Use IKapOpenWithSpecificInfo
 * @see IKapClose
 */
IKAPBOARDDLL HANDLE IKAPBOARD_CC IKapOpenGVB(unsigned resourceType, unsigned resourceIndex, IKAP_GVB_BOARD_INFO info);

#ifdef __cplusplus
}
#endif  // __cplusplus

#endif //_IKAP_BOARD_DEPRECATED_H
