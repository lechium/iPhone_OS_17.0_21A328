//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPCNNFastGestureRecognition : NSObject
{
    VCPCNNModelEspresso *_modelEspresso;	// 8 = 0x8
    float *_inputData;	// 16 = 0x10
}

+ (id)detector;	// IMP=0x006000000024b5b2
- (void).cxx_destruct;	// IMP=0x000000000024b91f
- (int)gestureDetection:(id)arg1 score:(float *)arg2;	// IMP=0x000000000024b8bb
- (float *)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int *)arg3 cnnInputWidth:(int *)arg4;	// IMP=0x000000000024b8b3
- (int)getDetectionScore:(float *)arg1;	// IMP=0x000000000024b80a
- (int)createInput:(float *)arg1 keypoints:(id)arg2;	// IMP=0x000000000024b62c
- (int)planDestroy;	// IMP=0x000000000024b624
- (void)dealloc;	// IMP=0x000000000024b573
- (id)init;	// IMP=0x000000000024af96

@end

