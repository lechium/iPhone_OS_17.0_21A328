//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class INImage, NSString;

@interface NSArray (INKeyImageProducing)
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;	// IMP=0x0020000000055d8d
@property(readonly) INImage *_keyImage;
- (id)_intents_localizedCopyWithLocalizer:(id)arg1;	// IMP=0x002000000008b14a
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;	// IMP=0x002000000008ab81
- (void)_intents_updateContainerWithCache:(id)arg1;	// IMP=0x00200000000bd85a
- (id)_intents_cacheableObjects;	// IMP=0x00200000000bd60c
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x0020000000134fbb
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x002000000021a360
- (_Bool)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2;	// IMP=0x002000000029bb37
- (id)_intents_indexingRepresentation;	// IMP=0x00200000002b9172
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x00200000002b9009
- (void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00200000002fb02a
- (id)_JSONDictionaryRepresentationForIntent:(id)arg1 parameterName:(id)arg2;	// IMP=0x00200000002fade0
- (id)resolutionResultDataForIntent:(id)arg1 intentSlotDescription:(id)arg2 error:(id *)arg3;	// IMP=0x00200000002fa901

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
