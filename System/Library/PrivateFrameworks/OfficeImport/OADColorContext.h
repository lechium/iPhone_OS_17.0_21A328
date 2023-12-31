//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OADColorMap, OADColorScheme;
@protocol OADColorPalette;

__attribute__((visibility("hidden")))
@interface OADColorContext : NSObject
{
    OADColorScheme *mScheme;	// 8 = 0x8
    OADColorMap *mMap;	// 16 = 0x10
    id <OADColorPalette> mPalette;	// 24 = 0x18
}

+ (id)colorContextWithScheme:(id)arg1 map:(id)arg2 palette:(id)arg3;	// IMP=0x00600000003094f6
- (void).cxx_destruct;	// IMP=0x00000000003097b9
@property(retain, nonatomic) id <OADColorPalette> palette; // @synthesize palette=mPalette;
@property(readonly, nonatomic) OADColorMap *map; // @synthesize map=mMap;
@property(readonly, nonatomic) OADColorScheme *scheme; // @synthesize scheme=mScheme;
- (void)applyThemeOverrides:(id)arg1 colorMapOverride:(id)arg2;	// IMP=0x00000000003096d1
- (unsigned long long)hash;	// IMP=0x0000000000309662
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003095a7
- (id)initWithScheme:(id)arg1 map:(id)arg2 palette:(id)arg3;	// IMP=0x000000000003462c

@end

