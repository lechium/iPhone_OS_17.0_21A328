//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTAlarm;

__attribute__((visibility("hidden")))
@interface COMTAlarmDeleteAction
{
    MTAlarm *_alarm;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000103b3
- (void).cxx_destruct;	// IMP=0x00000000000103d7
@property(readonly, copy, nonatomic) MTAlarm *alarm; // @synthesize alarm=_alarm;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000103bb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000010318
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000010238
- (id)initWithAlarm:(id)arg1;	// IMP=0x00000000000101be

@end

