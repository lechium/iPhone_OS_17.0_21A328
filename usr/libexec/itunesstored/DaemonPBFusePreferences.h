//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface DaemonPBFusePreferences : PBCodable
{
    NSMutableArray *_preferences;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001a939b
// Error: Property attributes should begin with the type ('T') attribute, property name: preferences
// Property attributes: (null)

- (void)mergeFrom:(id)arg1;	// IMP=0x00100000001a923d
- (unsigned long long)hash;	// IMP=0x00100000001a9220
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001a9190
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001a8fcc
- (void)writeTo:(id)arg1;	// IMP=0x00100000001a8e96
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001a8e89
- (id)dictionaryRepresentation;	// IMP=0x00100000001a8a96
- (id)description;	// IMP=0x00100000001a89e7
- (id)preferencesAtIndex:(unsigned long long)arg1;	// IMP=0x00100000001a89ca
- (unsigned long long)preferencesCount;	// IMP=0x00100000001a89ad
- (void)addPreferences:(id)arg1;	// IMP=0x00100000001a8943
- (void)clearPreferences;	// IMP=0x00100000001a8926

@end
