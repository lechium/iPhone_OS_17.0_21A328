//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (KSExtras)
+ (struct USet *)_nonHiraganaKatakanaOrBopomofoSet;	// IMP=0x0050000000005174
+ (struct USet *)_nonIdeographicCharacterSet;	// IMP=0x00500000000050a6
+ (struct USet *)_characterSetWithPattern:(id)arg1;	// IMP=0x0050000000004dde
- (_Bool)_containsHiraganaKatakanaOrBopomofo;	// IMP=0x001000000000513a
- (_Bool)_containsEmoji;	// IMP=0x001000000000512a
- (_Bool)_containsIdeographicCharacters;	// IMP=0x001000000000506c
- (_Bool)_containsCJKSymbolsAndPunctuation;	// IMP=0x0010000000004fc9
- (_Bool)_contentsExclusivelyInCharacterSet:(struct USet *)arg1;	// IMP=0x0010000000004eee
- (long long)wordCount;	// IMP=0x00100000000051f8
@end

