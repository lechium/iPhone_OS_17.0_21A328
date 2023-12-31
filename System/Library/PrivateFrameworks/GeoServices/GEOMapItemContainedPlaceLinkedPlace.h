//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEOBaseMapItem.h"

@class GEOFeatureStyleAttributes, GEOMapItemIdentifier, GEOPDLinkedPlace;

__attribute__((visibility("hidden")))
@interface GEOMapItemContainedPlaceLinkedPlace : GEOBaseMapItem
{
    GEOPDLinkedPlace *_linkedPlace;	// 8 = 0x8
    GEOMapItemIdentifier *_identifier;	// 16 = 0x10
    GEOFeatureStyleAttributes *_styleAttributes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000001230b29
- (id)description;	// IMP=0x0000000001230aad
- (_Bool)_isInLinkedPlaceRelationship;	// IMP=0x0000000001230aa5
- (id)_styleAttributes;	// IMP=0x0000000001230a90
- (int)_resultProviderID;	// IMP=0x0000000001230a73
- (_Bool)_hasResultProviderID;	// IMP=0x0000000001230991
- (id)_identifier;	// IMP=0x000000000123097c
- (unsigned long long)_muid;	// IMP=0x000000000123095f
- (_Bool)_hasMUID;	// IMP=0x000000000123087d
- (_Bool)_responseStatusIsIncomplete;	// IMP=0x0000000001230875
- (_Bool)_hasResolvablePartialInformation;	// IMP=0x000000000123086d
- (CDStruct_c3b9c2ee)coordinate;	// IMP=0x00000000012307c0
- (int)referenceFrame;	// IMP=0x000000000123078a
- (id)name;	// IMP=0x0000000001230775
- (_Bool)isValid;	// IMP=0x000000000123076d
- (id)initWithLinkedPlace:(id)arg1;	// IMP=0x0000000001230604

@end

