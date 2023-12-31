//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface ServiceURLList : NSObject
{
    NSString *_serviceName;	// 8 = 0x8
    CDStruct_8ce276cf _defaultsKey;	// 16 = 0x10
    NSMutableArray *_names;	// 32 = 0x20
    NSMutableArray *_urls;	// 40 = 0x28
    NSMutableArray *_infos;	// 48 = 0x30
    NSString *_defaultCustomURLString;	// 56 = 0x38
    CDUnknownBlockType _callback;	// 64 = 0x40
}

+ (id)defaultServiceURLLists;	// IMP=0x0040000000cce1ab
- (void).cxx_destruct;	// IMP=0x0020000000cce345
@property(copy, nonatomic) NSString *defaultCustomURLString; // @synthesize defaultCustomURLString=_defaultCustomURLString;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (id)infoAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000cce123
- (id)nameAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000cce0d4
- (id)URLAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000cce085
- (void)addURL:(id)arg1 withName:(id)arg2 info:(id)arg3;	// IMP=0x0010000000ccdfb9
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) CDStruct_8ce276cf defaultsKey;
@property(readonly, nonatomic) NSString *serviceName;
- (id);	// IMP=0x0010000000ccde9f

@end

