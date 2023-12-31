//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface SNSoundPrintKEmbeddingModelOutput : NSObject
{
    MLMultiArray *_fixedLengthEmbedding;	// 8 = 0x8
    MLMultiArray *_framewiseEmbedding;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001334ed
@property(retain, nonatomic) MLMultiArray *framewiseEmbedding; // @synthesize framewiseEmbedding=_framewiseEmbedding;
@property(retain, nonatomic) MLMultiArray *fixedLengthEmbedding; // @synthesize fixedLengthEmbedding=_fixedLengthEmbedding;
- (id)featureValueForName:(id)arg1;	// IMP=0x00000000001333f0
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithFixedLengthEmbedding:(id)arg1 framewiseEmbedding:(id)arg2;	// IMP=0x0000000000133337

@end

