//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableAttributedString, NSString;

__attribute__((visibility("hidden")))
@interface _NSAttributedStringFromMarkdownCreatorConcrete : NSObject
{
    NSMutableAttributedString *_result;	// 8 = 0x8
}

- (void)finalizeWithLanguageIdentifier:(id)arg1;	// IMP=0x0000000000758282
- (id)parseExtendedAttributesFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000758102
- (void)appendString:(id)arg1;	// IMP=0x00000000007580cd
- (unsigned short)lastCharacter;	// IMP=0x000000000075805e
- (void)appendString:(id)arg1 with:(id)arg2;	// IMP=0x0000000000757fff
- (id)result;	// IMP=0x0000000000757fe8
- (void)dealloc;	// IMP=0x0000000000757f8a
- (id)init;	// IMP=0x0000000000757f1b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

