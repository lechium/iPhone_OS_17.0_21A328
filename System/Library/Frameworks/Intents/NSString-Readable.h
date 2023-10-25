//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (Readable)
+ (id)intents_makeFromWidgetPlistableRepresentation:(id)arg1;	// IMP=0x00100000000b16d8
+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x00100000002fc74a
+ (id)deferredLocalizedIntentsStringWithFormat:(id)arg1 fromTable:(id)arg2 bundle:(id)arg3;	// IMP=0x0010000000358617
+ (id)deferredLocalizedIntentsStringWithFormat:(id)arg1 fromTable:(id)arg2 arguments:(struct __va_list_tag [1])arg3;	// IMP=0x0010000000358593
+ (id)deferredLocalizedIntentsStringWithFormat:(id)arg1 fromTable:(id)arg2;	// IMP=0x00100000003584e3
+ (id)deferredLocalizedIntentsStringWithFormat:(id)arg1;	// IMP=0x001000000035842d
- (id)_intents_localizedCopyWithLocalizer:(id)arg1;	// IMP=0x0010000000089d3b
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;	// IMP=0x0010000000089cd9
- (id)intents_encodeForPlistRepresentationWithParameters:(id)arg1;	// IMP=0x00100000000b1667
- (id)localizeForLanguage:(id)arg1;	// IMP=0x001000000010e166
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x00100000002fc28e
- (id)_intents_allowedUnarchiverClassesForProto;	// IMP=0x0010000000303aca
- (id)_intents_decodeFromProto;	// IMP=0x0010000000303701
- (id)_intents_encodeForProto;	// IMP=0x00100000003036e7
- (_Bool)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2;	// IMP=0x00100000004151ad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
