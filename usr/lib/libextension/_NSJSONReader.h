//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSJSONReader : NSObject
{
}

+ (_Bool)validForJSON:(id)arg1 depth:(unsigned long long)arg2 allowFragments:(_Bool)arg3;	// IMP=0x00800000007907ca
- (id)parseStream:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000792f61
- (id)parseData:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000792770

@end

