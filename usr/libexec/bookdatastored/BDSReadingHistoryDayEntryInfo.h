//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BDSReadingHistoryDayInfo, NSString;

@interface BDSReadingHistoryDayEntryInfo : NSObject
{
    NSString *_date;	// 8 = 0x8
    BDSReadingHistoryDayInfo *_day;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000043300
- (void).cxx_destruct;	// IMP=0x00200000000435e7
@property(retain, nonatomic) BDSReadingHistoryDayInfo *day; // @synthesize day=_day;
@property(copy, nonatomic) NSString *date; // @synthesize date=_date;
- (id)description;	// IMP=0x0010000000043520
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000004347f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000433d1
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000043308
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000430f4
- (id)initWithDate:(id)arg1 day:(id)arg2;	// IMP=0x001000000004305b

@end

