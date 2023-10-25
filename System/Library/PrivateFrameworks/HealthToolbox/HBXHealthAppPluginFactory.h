//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface HBXHealthAppPluginFactory : NSObject
{
}

+ (id)_createPluginDataListDataProviderProvidingFromPluginBundle:(id)arg1;	// IMP=0x00800000000069f8
+ (Class)makeDataListDataProviderClassFromPluginName:(id)arg1 displayType:(id)arg2;	// IMP=0x00800000000068ec
+ (id)_createPluginAppDelegateFromPluginBundle:(id)arg1;	// IMP=0x008000000000681b
+ (id)_createPluginAddDataViewControllerProvidingFromPluginBundle:(id)arg1;	// IMP=0x0080000000006664
+ (id)_loadBundleForPluginPath:(id)arg1;	// IMP=0x00800000000064a3
+ (id)_pluginsDirectoryPath;	// IMP=0x008000000000644c
+ (id)_pluginPathForDisplayType:(id)arg1;	// IMP=0x008000000000639b
+ (id)_loadPluginBundleForDisplayType:(id)arg1;	// IMP=0x008000000000633b
+ (id)_makeDataListViewControllerProvidingForDisplayType:(id)arg1;	// IMP=0x00800000000062db
+ (id)makeDataListViewControllerForHealthStore:(id)arg1 displayType:(id)arg2 predicate:(id)arg3;	// IMP=0x0080000000006223

@end
