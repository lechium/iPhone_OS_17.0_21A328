//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NEKPBSetReminderComplete : PBCodable
{
    NSString *_calendarName;	// 8 = 0x8
    NSString *_externalIdentifier;	// 16 = 0x10
    NSString *_reminderTitle;	// 24 = 0x18
    _Bool _isComplete;	// 32 = 0x20
    struct {
        unsigned int isComplete:1;
    } _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x0020000000035807
@property(retain, nonatomic) NSString *externalIdentifier; // @synthesize externalIdentifier=_externalIdentifier;
@property(retain, nonatomic) NSString *reminderTitle; // @synthesize reminderTitle=_reminderTitle;
@property(retain, nonatomic) NSString *calendarName; // @synthesize calendarName=_calendarName;
@property(nonatomic) _Bool isComplete; // @synthesize isComplete=_isComplete;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000356e5
- (unsigned long long)hash;	// IMP=0x001000000003564e
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003552a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000035441
- (void)copyTo:(id)arg1;	// IMP=0x001000000003539e
- (void)writeTo:(id)arg1;	// IMP=0x00100000000352fd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000352f0
- (id)dictionaryRepresentation;	// IMP=0x0010000000034f9b
- (id)description;	// IMP=0x0010000000034eec
@property(readonly, nonatomic) _Bool hasExternalIdentifier;
@property(readonly, nonatomic) _Bool hasReminderTitle;
@property(readonly, nonatomic) _Bool hasCalendarName;
@property(nonatomic) _Bool hasIsComplete;

@end

