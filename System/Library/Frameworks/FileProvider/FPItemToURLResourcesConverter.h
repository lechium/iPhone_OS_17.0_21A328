//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FPItemToURLResourcesConverter : NSObject
{
    NSMutableDictionary *_gettersByURLKey;	// 8 = 0x8
    NSMutableDictionary *_typesByURLKey;	// 16 = 0x10
}

+ (id)dictionaryFromItem:(id)arg1 requestedKeys:(id)arg2;	// IMP=0x00600000001255e8
- (void).cxx_destruct;	// IMP=0x0000000000125954
- (id)_dictionaryFromItem:(id)arg1 requestedKeys:(id)arg2;	// IMP=0x0000000000124833
- (void)_cacheImplementedPropertiesForClass:(Class)arg1;	// IMP=0x000000000012441f
- (void)_addHelperMethodsToClass:(Class)arg1;	// IMP=0x000000000012439a
- (void)_addMethod:(SEL)arg1 toClass:(Class)arg2;	// IMP=0x0000000000124336
- (id)initWithItemClass:(Class)arg1;	// IMP=0x0000000000124220

@end

