//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

@interface TransitPreferences
{
    _Bool _showICFares;	// 8 = 0x8
    int _sortOption;	// 12 = 0xc
    unsigned long long _disabledModes;	// 16 = 0x10
    NSNumber *_surchargeOption;	// 24 = 0x18
}

+ (void)toggleMode:(unsigned long long)arg1 inUserDefaults:(id)arg2;	// IMP=0x0020000000cd47d4
+ (_Bool)isModeDisabled:(unsigned long long)arg1 inUserDefaults:(id)arg2;	// IMP=0x0010000000cd4787
+ (unsigned long long)disabledModesByTogglingMode:(unsigned long long)arg1 inModes:(unsigned long long)arg2;	// IMP=0x0010000000cd476b
+ (_Bool)isModeDisabled:(unsigned long long)arg1 inModes:(unsigned long long)arg2;	// IMP=0x0010000000cd475f
+ (unsigned long long)enabledModesFromDisabled:(unsigned long long)arg1;	// IMP=0x0010000000cd4751
- (void).cxx_destruct;	// IMP=0x0010000000cd4918
@property(nonatomic) _Bool showICFares; // @synthesize showICFares=_showICFares;
@property(retain, nonatomic) NSNumber *surchargeOption; // @synthesize surchargeOption=_surchargeOption;
@property(nonatomic) int sortOption; // @synthesize sortOption=_sortOption;
@property(nonatomic) unsigned long long disabledModes; // @synthesize disabledModes=_disabledModes;
- (id)transitOptions;	// IMP=0x0010000000cd4747
- (_Bool)isModeDisabled:(unsigned long long)arg1;	// IMP=0x0010000000cd46fd
- (void)_copyPropertiesTo:(id)arg1;	// IMP=0x0010000000cd4635
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000cd45bc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000cd45b1
- (id)_values;	// IMP=0x0010000000cd442d
- (id)_keys;	// IMP=0x0010000000cd4420
- (void)loadValuesFromDefaults;	// IMP=0x0010000000cd42b0
- (_Bool)hasAnyNonStandardPreferences;	// IMP=0x0010000000cd4297
- (id)initWithCopy:(id)arg1;	// IMP=0x0010000000cd4210
- (id)initWithTransitOptions:(id)arg1 defaults:(id)arg2;	// IMP=0x0010000000cd4048
- (id)transitPreferencesByOverridingPropertiesWithUserInfo:(id)arg1;	// IMP=0x00100000008ad92c

@end

