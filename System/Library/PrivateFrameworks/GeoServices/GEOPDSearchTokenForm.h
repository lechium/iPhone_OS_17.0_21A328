//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOPDSearchTokenForm : PBCodable
{
    NSString *_value;	// 8 = 0x8
    int _type;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000011d29f8
- (unsigned long long)hash;	// IMP=0x00000000011d29b9
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000011d2919
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000011d2893
- (void)writeTo:(id)arg1;	// IMP=0x00000000011d2835
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000011d2828
- (id)jsonRepresentation;	// IMP=0x00000000011d281e
- (id)dictionaryRepresentation;	// IMP=0x00000000011d2742
- (id)description;	// IMP=0x00000000011d2693

@end

