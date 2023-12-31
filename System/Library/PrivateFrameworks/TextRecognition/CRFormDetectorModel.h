//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface CRFormDetectorModel : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (id)defaultURLOfModelInThisBundle;	// IMP=0x00600000000a350b
- (void).cxx_destruct;	// IMP=0x00000000000a3d4e
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000a3aad
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000a3960
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a38ea
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000a3791
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a36bb
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a3609
- (id)init;	// IMP=0x00000000000a35ac

@end

