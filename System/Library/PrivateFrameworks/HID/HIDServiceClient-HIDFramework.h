//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IOKit/HIDServiceClient.h>

@interface HIDServiceClient (HIDFramework)
@property(readonly) unsigned long long serviceID;
- (void)setRemovalHandler:(CDUnknownBlockType)arg1;	// IMP=0x0030000000002feb
- (id)eventMatching:(id)arg1;	// IMP=0x0030000000002fd6
- (_Bool)conformsToUsagePage:(long long)arg1 usage:(long long)arg2;	// IMP=0x0030000000002fc2
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x0030000000002faf
- (id)propertiesForKeys:(id)arg1;	// IMP=0x0030000000002f9a
- (id)propertyForKey:(id)arg1;	// IMP=0x0030000000002f85
@end
