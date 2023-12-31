//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VTKBitmapContext;
@protocol VTKColorDifferenceStrategy;

__attribute__((visibility("hidden")))
@interface VTKAntiAliasDetector : NSObject
{
    VTKBitmapContext *_leftContext;	// 8 = 0x8
    VTKBitmapContext *_rightContext;	// 16 = 0x10
    id <VTKColorDifferenceStrategy> _strategy;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000351a
@property(retain, nonatomic) id <VTKColorDifferenceStrategy> strategy; // @synthesize strategy=_strategy;
@property(retain, nonatomic) VTKBitmapContext *rightContext; // @synthesize rightContext=_rightContext;
@property(retain, nonatomic) VTKBitmapContext *leftContext; // @synthesize leftContext=_leftContext;
- (_Bool)isAntiAliasedAtPointHelper:(struct VTKPoint)arg1 leftContext:(id)arg2 rightContext:(id)arg3;	// IMP=0x0000000000003063
- (_Bool)isAntiAliasedAtPoint:(struct VTKPoint)arg1;	// IMP=0x0000000000003049
- (id)initWithLeftContext:(id)arg1 rightContext:(id)arg2 strategy:(id)arg3;	// IMP=0x0000000000002f91

@end

