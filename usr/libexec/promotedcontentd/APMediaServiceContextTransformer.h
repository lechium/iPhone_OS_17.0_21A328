//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APMediaServiceRequestParameters;

@interface APMediaServiceContextTransformer : NSObject
{
    APMediaServiceRequestParameters *_params;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000011d277
// Error: Property attributes should begin with the type ('T') attribute, property name: params
// Property attributes: (null)

- (void)_addFrequencyCappingDataToRequestDictionary:(id)arg1 fromSupplementalContext:(id)arg2;	// IMP=0x001000000011d1a6
- (void)_addImpressionCap:(id)arg1 clickCap:(id)arg2 toDictionary:(id)arg3;	// IMP=0x001000000011d040
- (id)_odmlProperties;	// IMP=0x001000000011d027
- (id)_contextDictionary;	// IMP=0x001000000011d00e
- (id)_capArray:(id)arg1;	// IMP=0x001000000011cdb8
- (id)_requestDebugInfo;	// IMP=0x001000000011cc37
- (id)_locationDictionary;	// IMP=0x001000000011c8b4
- (id)_propertiesDictionary;	// IMP=0x001000000011bf38
- (id)_adRequestDictionary;	// IMP=0x001000000011bcd6
- (id)_typeDictionary;	// IMP=0x001000000011bc1b
- (id)transformedContextJSON:(id *)arg1;	// IMP=0x001000000011b9c6
- (id)initWithParams:(id)arg1;	// IMP=0x001000000011b8da

@end

