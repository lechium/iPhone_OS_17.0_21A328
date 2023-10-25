//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKVKImageSourceCalculationParameters, NSArray, NSMutableArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface MKVKImageSourceKeyImageResult : NSObject
{
    NSMutableArray *_mutableFullBleedColors;	// 8 = 0x8
    _Bool _sameFullBleedColors;	// 16 = 0x10
    MKVKImageSourceCalculationParameters *_parameters;	// 24 = 0x18
    NSMutableArray *_triedKeys;	// 32 = 0x20
    NSMutableArray *_mutableImages;	// 40 = 0x28
    NSMutableSet *_imageDatas;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000234ca7
@property(retain, nonatomic) NSMutableSet *imageDatas; // @synthesize imageDatas=_imageDatas;
@property(retain, nonatomic) NSMutableArray *mutableImages; // @synthesize mutableImages=_mutableImages;
@property(retain, nonatomic) NSMutableArray *triedKeys; // @synthesize triedKeys=_triedKeys;
@property(readonly, nonatomic, getter=hasSameFullBleedColors) _Bool sameFullBleedColors; // @synthesize sameFullBleedColors=_sameFullBleedColors;
@property(readonly, nonatomic) MKVKImageSourceCalculationParameters *parameters; // @synthesize parameters=_parameters;
- (void)addFullBleedColor:(id)arg1;	// IMP=0x0000000000234ba5
@property(readonly, nonatomic) NSArray *images;
@property(readonly, nonatomic) NSArray *fullBleedColors;
- (id)initWithParameters:(id)arg1;	// IMP=0x0000000000234a96

@end
