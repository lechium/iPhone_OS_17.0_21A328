//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CRLWPStorageStyleProvider : NSObject
{
}

+ (id)styleProviderForStorage:(id)arg1;	// IMP=0x0020000000612fb6
- (id)dropCapStyleAtParIndex:(unsigned long long)arg1;	// IMP=0x0020000000613502
- (id)listStyleAtParIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;	// IMP=0x0010000000613347
- (id)characterStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;	// IMP=0x001000000061318c
- (id)paragraphStyleAtParIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;	// IMP=0x0010000000612fd1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsBoldItalicUnderlineShortcuts;

@end
