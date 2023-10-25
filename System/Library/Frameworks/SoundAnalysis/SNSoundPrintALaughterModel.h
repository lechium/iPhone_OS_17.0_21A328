//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface SNSoundPrintALaughterModel : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00600000001324a4
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0060000000132416
+ (id)URLOfModelInThisBundle;	// IMP=0x00600000001320bf
- (void).cxx_destruct;	// IMP=0x00000000001331e7
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000132e7e
- (id)predictionFromInput1:(id)arg1 stateIn:(id)arg2 detectedHistoryIn:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000132db4
- (void)predictionFromFeatures:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000132aec
- (void)predictionFromFeatures:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000013283b
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000132638
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001325c2
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x000000000013239e
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000132326
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001322a1
- (id)init;	// IMP=0x0000000000132244
- (id)initWithMLModel:(id)arg1;	// IMP=0x00000000001321b3

@end
