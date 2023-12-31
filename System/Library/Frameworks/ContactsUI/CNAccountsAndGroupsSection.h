//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNAccountsAndGroupsSection : NSObject
{
    _Bool _isAllContactsGlobalSection;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSArray *_items;	// 24 = 0x18
    CDUnknownBlockType _titleProvider;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002a9ee4
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) CDUnknownBlockType titleProvider; // @synthesize titleProvider=_titleProvider;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) _Bool isAllContactsGlobalSection; // @synthesize isAllContactsGlobalSection=_isAllContactsGlobalSection;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002a9d87
- (unsigned long long)hash;	// IMP=0x00000000002a9ce5

@end

