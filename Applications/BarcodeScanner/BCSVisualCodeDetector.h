//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface BCSVisualCodeDetector : NSObject
{
    _Bool _isAppC3DTracking;	// 8 = 0x8
    CDUnknownBlockType _appcodeExtractCompletionHandler;	// 16 = 0x10
    unsigned int _imageOrientation;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000015956
@property(nonatomic) unsigned int imageOrientation; // @synthesize imageOrientation=_imageOrientation;
- (void)endSession;	// IMP=0x001000000001593e
- (void)startSession;	// IMP=0x0010000000015938
- (struct CGRect)_regionOfInterest;	// IMP=0x001000000001591a
- (id)_estimateQRCodeAvailabilityInFrame:(struct __CVBuffer *)arg1;	// IMP=0x00100000000155d5
- (void)resetCache;	// IMP=0x00100000000155cb
- (void)detectCodeFromBuffer:(struct opaqueCMSampleBuffer *)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000153c1
- (id)init;	// IMP=0x001000000001535f

@end

