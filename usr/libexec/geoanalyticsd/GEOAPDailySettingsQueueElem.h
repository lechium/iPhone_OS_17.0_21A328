//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOLogMsgEventPeriodicSettingsSummary;

@interface GEOAPDailySettingsQueueElem
{
    GEOLogMsgEventPeriodicSettingsSummary *_settings;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000014f86
@property(readonly, nonatomic) GEOLogMsgEventPeriodicSettingsSummary *settings; // @synthesize settings=_settings;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000014e35
- (unsigned long long)hash;	// IMP=0x0010000000014da9
- (id)copy;	// IMP=0x0010000000014d6f
- (id)initWithSettings:(id)arg1 createTime:(id)arg2;	// IMP=0x0010000000014cd3

@end

