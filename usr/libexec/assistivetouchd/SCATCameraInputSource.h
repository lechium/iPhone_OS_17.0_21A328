//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVCaptureDeviceDiscoverySession, AVCaptureSession, AVCaptureVideoPreviewLayer, CALayer, NSObject, NSString, UIView;
@protocol OS_dispatch_queue, SCATCameraInputSourceDelegate;

@interface SCATCameraInputSource
{
    _Bool _available;	// 8 = 0x8
    _Bool _leftHeadSwitchDown;	// 9 = 0x9
    _Bool _rightHeadSwitchDown;	// 10 = 0xa
    _Bool _monitoringDeviceDiscoverySession;	// 11 = 0xb
    NSObject<OS_dispatch_queue> *_captureOutputQueue;	// 16 = 0x10
    AVCaptureSession *_captureSession;	// 24 = 0x18
    unsigned long long _availabilityDetail;	// 32 = 0x20
    CDStruct_761d4fd2 *_face;	// 40 = 0x28
    AVCaptureDeviceDiscoverySession *_captureDeviceDiscoverySession;	// 48 = 0x30
    UIView *_captureOutputPreview;	// 56 = 0x38
    AVCaptureVideoPreviewLayer *_captureVideoPreviewLayer;	// 64 = 0x40
    CALayer *_faceLayer;	// 72 = 0x48
    CDStruct_c305b3b4 _state;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000085b48
@property(retain, nonatomic) CALayer *faceLayer; // @synthesize faceLayer=_faceLayer;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *captureVideoPreviewLayer; // @synthesize captureVideoPreviewLayer=_captureVideoPreviewLayer;
@property(retain, nonatomic) UIView *captureOutputPreview; // @synthesize captureOutputPreview=_captureOutputPreview;
@property(nonatomic) _Bool monitoringDeviceDiscoverySession; // @synthesize monitoringDeviceDiscoverySession=_monitoringDeviceDiscoverySession;
@property(retain, nonatomic) AVCaptureDeviceDiscoverySession *captureDeviceDiscoverySession; // @synthesize captureDeviceDiscoverySession=_captureDeviceDiscoverySession;
@property(nonatomic, getter=isRightHeadSwitchDown) _Bool rightHeadSwitchDown; // @synthesize rightHeadSwitchDown=_rightHeadSwitchDown;
@property(nonatomic, getter=isLeftHeadSwitchDown) _Bool leftHeadSwitchDown; // @synthesize leftHeadSwitchDown=_leftHeadSwitchDown;
@property(nonatomic) CDStruct_761d4fd2 *face; // @synthesize face=_face;
@property(nonatomic) unsigned long long availabilityDetail; // @synthesize availabilityDetail=_availabilityDetail;
@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *captureOutputQueue; // @synthesize captureOutputQueue=_captureOutputQueue;
@property(nonatomic) CDStruct_c305b3b4 state; // @synthesize state=_state;
@property(nonatomic, getter=isAvailable) _Bool available; // @synthesize available=_available;
- (void)_didUpdateState:(CDStruct_c305b3b4)arg1;	// IMP=0x0010000000085807
- (void)updateWithSwitches:(id)arg1 recipe:(id)arg2;	// IMP=0x00100000000855b4
- (void)stopRunning;	// IMP=0x001000000008556b
- (void)startRunning;	// IMP=0x0010000000085495
- (void)setDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x0010000000085466
- (id)init;	// IMP=0x001000000008541a
- (void)dealloc;	// IMP=0x001000000008537d
- (long long)_actionIdentifierForHeadSwitch:(long long)arg1;	// IMP=0x0010000000085277
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;	// IMP=0x00100000000850db
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;	// IMP=0x0010000000084d57
- (void)_stopCaptureOutput;	// IMP=0x0010000000084cde
- (void)_startCaptureOutput;	// IMP=0x0010000000084c65
- (void)_setupCaptureOutput;	// IMP=0x0010000000084302
- (id)_captureVideoDataOutputWithDelegate:(id)arg1 queue:(id)arg2 format:(id)arg3;	// IMP=0x001000000008415e
- (id)_captureMetadataOutputWithDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x00100000000840ec
- (id)captureDeviceInput;	// IMP=0x0010000000083f0c
- (void)startDeviceDiscoverySession;	// IMP=0x0010000000083db5
- (void)_cleanupCaptureOutput;	// IMP=0x0010000000083cbf
- (void)_didUpdateAvailability:(_Bool)arg1 withDetail:(unsigned long long)arg2;	// IMP=0x0010000000083b58
- (void)_didReceiveActionWithIdentifier:(long long)arg1 start:(_Bool)arg2;	// IMP=0x0010000000083a44

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SCATCameraInputSourceDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
