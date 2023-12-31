//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreLocation/CLPlacemark.h>

@class NSString;

@interface CLPlacemark (INIntentsAdditionsDeprecated)
+ (id)placemarkWithLocation:(id)arg1 name:(id)arg2 postalAddress:(id)arg3;	// IMP=0x00100000002a8f1e
+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x00100000003ab184
- (id)initIntentPlacemarkWithLocation:(id)arg1 addressDictionary:(id)arg2;	// IMP=0x001000000001067f
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;	// IMP=0x001000000008cc69
- (id)_intents_defaultReadableDescription;	// IMP=0x001000000008cb46
- (_Bool)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2;	// IMP=0x0010000000142e61
- (id)_intents_indexingRepresentation;	// IMP=0x00100000002b93eb
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x00100000003aaf81

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

