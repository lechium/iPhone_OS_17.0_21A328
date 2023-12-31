//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPVideoCNNBackbone : NSObject
{
    VCPCNNModelEspresso *_modelEspresso;	// 8 = 0x8
    NSArray *_outputNames;	// 16 = 0x10
    float *_outputBeforeFc;	// 24 = 0x18
    float *_outputBeforeFcSettling;	// 32 = 0x20
    float *_outputBeforeSpatiialPooling;	// 40 = 0x28
    float *_outputRes4;	// 48 = 0x30
    float *_outputBeforeTemporalPooling;	// 56 = 0x38
    NSData *_embedding;	// 64 = 0x40
}

+ (id)sharedModel:(id)arg1 outputNames:(id)arg2 properties:(id)arg3;	// IMP=0x006000000014201d
- (void).cxx_destruct;	// IMP=0x00000000001427c2
@property(readonly) NSData *embedding; // @synthesize embedding=_embedding;
@property(readonly) float *outputBeforeTemporalPooling; // @synthesize outputBeforeTemporalPooling=_outputBeforeTemporalPooling;
@property(readonly) float *outputRes4; // @synthesize outputRes4=_outputRes4;
@property(readonly) float *outputBeforeSpatiialPooling; // @synthesize outputBeforeSpatiialPooling=_outputBeforeSpatiialPooling;
@property(readonly) float *outputBeforeFcSettling; // @synthesize outputBeforeFcSettling=_outputBeforeFcSettling;
@property(readonly) float *outputBeforeFc; // @synthesize outputBeforeFc=_outputBeforeFc;
- (int)inference:(float *)arg1 settling:(_Bool)arg2;	// IMP=0x0000000000142511
- (id)initWithConfig:(id)arg1;	// IMP=0x00000000001421e3

@end

