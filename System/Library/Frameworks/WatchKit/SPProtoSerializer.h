//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SPProtoSerializer : NSObject
{
}

+ (id)arrayWithSPPlist:(id)arg1;	// IMP=0x008000000002de68
+ (id)dictionaryWithSPPlist:(id)arg1;	// IMP=0x008000000002d73a
+ (id)spPlistWithDictionary:(id)arg1;	// IMP=0x008000000002d1b7
+ (id)spPlistWithArray:(id)arg1;	// IMP=0x008000000002cc4f
+ (id)protoSPObjectWithArray:(id)arg1 forKey:(id)arg2;	// IMP=0x008000000002cb65
+ (id)protoSPObjectWithDictionary:(id)arg1 forKey:(id)arg2;	// IMP=0x008000000002ca7b
+ (id)protoSPObjectWithObject:(id)arg1 forKey:(id)arg2;	// IMP=0x008000000002c9de
+ (id)protoSPObjectWithData:(id)arg1 forKey:(id)arg2;	// IMP=0x008000000002c941
+ (id)protoSPObjectWithString:(id)arg1 forKey:(id)arg2;	// IMP=0x008000000002c8a4
+ (id)numberWithSPProtoSockPuppetObject:(id)arg1;	// IMP=0x008000000002c6ec
+ (id)protoSPObjectWithNumber:(id)arg1 forKey:(id)arg2;	// IMP=0x008000000002c417
+ (id)objectWithData:(id)arg1;	// IMP=0x008000000002c35b
+ (id)dataWithObject:(id)arg1;	// IMP=0x008000000002c27c

@end
