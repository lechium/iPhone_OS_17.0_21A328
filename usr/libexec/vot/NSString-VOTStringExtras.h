//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (VOTStringExtras)
+ (id)stringWithUnichar:(unsigned short)arg1;	// IMP=0x001000000002d2b6
- (id)wordStringFromPosition:(long long)arg1 inDirection:(long long)arg2;	// IMP=0x002000000002d499
- (struct _NSRange)wordFromPosition:(long long)arg1 inDirection:(long long)arg2;	// IMP=0x001000000002d430
- (struct _NSRange)lineFromPosition:(long long)arg1 inDirection:(long long)arg2;	// IMP=0x001000000002d3c7
- (struct _NSRange)paragraphFromPosition:(long long)arg1 inDirection:(long long)arg2;	// IMP=0x001000000002d35e
- (struct _NSRange)sentenceFromPosition:(long long)arg1 inDirection:(long long)arg2;	// IMP=0x001000000002d2f5
@end

