//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class FCCKPRecordFieldIdentifier, FCCKPRecordFieldValue;

__attribute__((visibility("hidden")))
@interface FCCKPQueryFilter : PBCodable
{
    FCCKPRecordFieldIdentifier *_fieldName;	// 8 = 0x8
    FCCKPRecordFieldValue *_fieldValue;	// 16 = 0x10
    int _type;	// 24 = 0x18
    CDStruct_f953fb60 _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x000000000031b403
- (unsigned long long)hash;	// IMP=0x000000000031b35f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000031b27d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000031b1bf
- (void)writeTo:(id)arg1;	// IMP=0x000000000031b13c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000031b12f
- (id)dictionaryRepresentation;	// IMP=0x000000000031ad6c
- (id)description;	// IMP=0x000000000031acbd

@end
