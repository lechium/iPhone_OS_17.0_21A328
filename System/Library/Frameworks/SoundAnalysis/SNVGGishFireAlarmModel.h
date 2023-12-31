//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface SNVGGishFireAlarmModel : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x006000000012562e
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00600000001255a0
+ (id)URLOfModelInThisBundle;	// IMP=0x0060000000125249
- (void).cxx_destruct;	// IMP=0x0000000000126371
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000126008
- (id)predictionFromInput1:(id)arg1 stateIn:(id)arg2 detectedHistoryIn:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000125f3e
- (void)predictionFromFeatures:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000125c76
- (void)predictionFromFeatures:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001259c5
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001257c2
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012574c
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000125528
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001254b0
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012542b
- (id)init;	// IMP=0x00000000001253ce
- (id)initWithMLModel:(id)arg1;	// IMP=0x000000000012533d

@end

