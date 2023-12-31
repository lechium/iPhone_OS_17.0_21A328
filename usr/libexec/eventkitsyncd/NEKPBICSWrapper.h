//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NEKPBCalendarIdentifier, NSData, NSMutableArray, NSString;

@interface NEKPBICSWrapper : PBCodable
{
    unsigned long long _displayOrder;	// 8 = 0x8
    double _taskCompletionDate;	// 16 = 0x10
    NEKPBCalendarIdentifier *_calendarIdentifier;	// 24 = 0x18
    unsigned int _calendarItemCount;	// 32 = 0x20
    NSData *_iCSData;	// 40 = 0x28
    NSData *_lzfseICSData;	// 48 = 0x30
    NSMutableArray *_metadataKeys;	// 56 = 0x38
    NSMutableArray *_metadataValues;	// 64 = 0x40
    NSString *_nuevoIdentifier;	// 72 = 0x48
    NSString *_oldCalendarIdentifier;	// 80 = 0x50
    NSString *_oldIdentifier;	// 88 = 0x58
    NSString *_syncID;	// 96 = 0x60
    struct {
        unsigned int displayOrder:1;
        unsigned int taskCompletionDate:1;
        unsigned int calendarItemCount:1;
    } _has;	// 104 = 0x68
}

+ (Class)metadataValuesType;	// IMP=0x0020000000066fbc
+ (Class)metadataKeysType;	// IMP=0x0010000000066eea
- (void).cxx_destruct;	// IMP=0x0020000000068f42
@property(retain, nonatomic) NSData *lzfseICSData; // @synthesize lzfseICSData=_lzfseICSData;
@property(nonatomic) unsigned long long displayOrder; // @synthesize displayOrder=_displayOrder;
@property(retain, nonatomic) NSString *nuevoIdentifier; // @synthesize nuevoIdentifier=_nuevoIdentifier;
@property(retain, nonatomic) NSString *oldIdentifier; // @synthesize oldIdentifier=_oldIdentifier;
@property(nonatomic) double taskCompletionDate; // @synthesize taskCompletionDate=_taskCompletionDate;
@property(retain, nonatomic) NSString *oldCalendarIdentifier; // @synthesize oldCalendarIdentifier=_oldCalendarIdentifier;
@property(retain, nonatomic) NSString *syncID; // @synthesize syncID=_syncID;
@property(retain, nonatomic) NSMutableArray *metadataValues; // @synthesize metadataValues=_metadataValues;
@property(retain, nonatomic) NSMutableArray *metadataKeys; // @synthesize metadataKeys=_metadataKeys;
@property(nonatomic) unsigned int calendarItemCount; // @synthesize calendarItemCount=_calendarItemCount;
@property(retain, nonatomic) NEKPBCalendarIdentifier *calendarIdentifier; // @synthesize calendarIdentifier=_calendarIdentifier;
@property(retain, nonatomic) NSData *iCSData; // @synthesize iCSData=_iCSData;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000068a22
- (unsigned long long)hash;	// IMP=0x00100000000687b5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000068532
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000068098
- (void)copyTo:(id)arg1;	// IMP=0x0010000000067dfd
- (void)writeTo:(id)arg1;	// IMP=0x0010000000067aa9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000067a9c
- (id)dictionaryRepresentation;	// IMP=0x0010000000067176
- (id)description;	// IMP=0x00100000000670c7
- (_Bool);	// IMP=0x00100000000670b2
@property(nonatomic) _Bool hasDisplayOrder;
@property(readonly, nonatomic) _Bool hasNuevoIdentifier;
@property(readonly, nonatomic) _Bool hasOldIdentifier;
@property(nonatomic) _Bool hasTaskCompletionDate;
@property(readonly, nonatomic) _Bool hasOldCalendarIdentifier;
@property(readonly, nonatomic) _Bool hasSyncID;
- (id)metadataValuesAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000066f9f
- (unsigned long long)metadataValuesCount;	// IMP=0x0010000000066f82
- (void)addMetadataValues:(id)arg1;	// IMP=0x0010000000066f18
- (void)clearMetadataValues;	// IMP=0x0010000000066efb
- (id)metadataKeysAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000066ecd
- (unsigned long long)metadataKeysCount;	// IMP=0x0010000000066eb0
- (void)addMetadataKeys:(id)arg1;	// IMP=0x0010000000066e46
- (void)clearMetadataKeys;	// IMP=0x0010000000066e29
@property(nonatomic) _Bool hasCalendarItemCount;
@property(readonly, nonatomic) _Bool hasCalendarIdentifier;
@property(readonly, nonatomic) _Bool hasICSData;

// Remaining properties
@property(readonly, nonatomic) _Bool hasLzfseICSData;

@end

