//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface MonzaV4_1 : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x006000000031bc1e
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x006000000031bb90
+ (id)URLOfModelInThisBundle;	// IMP=0x006000000031b863
- (void).cxx_destruct;	// IMP=0x000000000031c560
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000031c319
- (id)predictionFromInputImage:(struct __CVBuffer *)arg1 error:(id *)arg2;	// IMP=0x000000000031c2a8
- (void)predictionFromFeatures:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000031c0af
- (void)predictionFromFeatures:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000031becd
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000031bdb2
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x000000000031bd3c
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x000000000031bb18
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000031baa0
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x000000000031ba1b
- (id)init;	// IMP=0x000000000031b9be
- (id)initWithMLModel:(id)arg1;	// IMP=0x000000000031b92d

@end
