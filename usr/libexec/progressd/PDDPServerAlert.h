//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE, NSMutableArray, NSString, PDDPButtonInfo, PDDPDate;

@interface PDDPServerAlert : PBCodable
{
    NSString *_alertId;	// 8 = 0x8
    PDDPDate *_dateCreated;	// 16 = 0x10
    PDDPDate *_dateExpires;	// 24 = 0x18
    PDDPDate *_dateLastModified;	// 32 = 0x20
    PDDPButtonInfo *_defaultButtonInfo;	// 40 = 0x28
    int _displayRoles;	// 48 = 0x30
    int _displayType;	// 52 = 0x34
    NSString *_message;	// 56 = 0x38
    NSMutableArray *_otherButtonInfos;	// 64 = 0x40
    NSString *_title;	// 72 = 0x48
    struct {
        unsigned int displayRoles:1;
        unsigned int displayType:1;
    } _has;	// 80 = 0x50
}

+ (Class)otherButtonInfosType;	// IMP=0x00200000000d35fa
- (void).cxx_destruct;	// IMP=0x00200000000d4e21
@property(retain, nonatomic) NSMutableArray *otherButtonInfos; // @synthesize otherButtonInfos=_otherButtonInfos;
@property(retain, nonatomic) PDDPButtonInfo *defaultButtonInfo; // @synthesize defaultButtonInfo=_defaultButtonInfo;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) PDDPDate *dateExpires; // @synthesize dateExpires=_dateExpires;
@property(retain, nonatomic) PDDPDate *dateLastModified; // @synthesize dateLastModified=_dateLastModified;
@property(retain, nonatomic) PDDPDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(nonatomic) int displayRoles; // @synthesize displayRoles=_displayRoles;
@property(nonatomic) int displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) NSString *alertId; // @synthesize alertId=_alertId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000d4a0c
- (unsigned long long)hash;	// IMP=0x00100000000d48d0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000d46b2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000d4383
- (MISSING_TYPE *)copyTo: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000d41a0
- (void)writeTo:(id)arg1;	// IMP=0x00100000000d3f59
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000d3f4c
- (id)dictionaryRepresentation;	// IMP=0x00100000000d36ba
- (id)description;	// IMP=0x00100000000d360b
- (id)otherButtonInfosAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000d35dd
- (unsigned long long)otherButtonInfosCount;	// IMP=0x00100000000d35c0
- (void)addOtherButtonInfos:(id)arg1;	// IMP=0x00100000000d3556
- (void)clearOtherButtonInfos;	// IMP=0x00100000000d3539
@property(readonly, nonatomic) _Bool hasDefaultButtonInfo;
@property(readonly, nonatomic) _Bool hasMessage;
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly, nonatomic) _Bool hasDateExpires;
@property(readonly, nonatomic) _Bool hasDateLastModified;
@property(readonly, nonatomic) _Bool hasDateCreated;
@property(nonatomic) _Bool hasDisplayRoles;
@property(nonatomic) _Bool hasDisplayType;
@property(readonly, nonatomic) _Bool hasAlertId;

@end
