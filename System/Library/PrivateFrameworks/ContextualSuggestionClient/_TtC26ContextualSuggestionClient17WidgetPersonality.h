//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface _TtC26ContextualSuggestionClient17WidgetPersonality : NSObject
{
    MISSING_TYPE *extensionBundleIdentifier;	// 8 = 0x8
    MISSING_TYPE *kind;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000020f70
- (id)init;	// IMP=0x0000000000020f10
- (_Bool)matchesPersonality:(id)arg1;	// IMP=0x0000000000020ec0
@property(nonatomic, readonly) NSString *kind;
@property(nonatomic, readonly) NSString *extensionBundleIdentifier;

@end
