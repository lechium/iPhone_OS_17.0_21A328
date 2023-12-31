//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface SNSoundClassifierVersion1Model : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x006000000012b334
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x006000000012b2a6
+ (id)URLOfModelInThisBundle;	// IMP=0x006000000012af4f
- (void).cxx_destruct;	// IMP=0x000000000012be07
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000012bb50
- (id)predictionFromAudioSamples:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012bac0
- (void)predictionFromFeatures:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000012b873
- (void)predictionFromFeatures:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000012b63d
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000012b4c8
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012b452
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x000000000012b22e
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012b1b6
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012b131
- (id)init;	// IMP=0x000000000012b0d4
- (id)initWithMLModel:(id)arg1;	// IMP=0x000000000012b043

@end

