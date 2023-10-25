//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AXRuntime/AXElement.h>

@class NSString;

@interface AXElement (AXFocusEngine)
- (_Bool)hasNativeFocusElements;	// IMP=0x0020000000004f16
- (_Bool)moveFocusWithHeading:(unsigned long long)arg1 withQueryString:(id)arg2;	// IMP=0x0020000000004e3a
- (_Bool)moveFocusWithHeading:(unsigned long long)arg1 byGroup:(_Bool)arg2;	// IMP=0x0020000000004d4a
- (void)didFocus;	// IMP=0x0020000000004d08
- (void)disableFocus;	// IMP=0x0020000000004cea
- (void)enableFocus;	// IMP=0x0020000000004ccc
- (void)focusOnApplication;	// IMP=0x0020000000004cae
- (void)focusOnRemoteSceneID;	// IMP=0x0020000000004c13
- (id)remoteSceneID;	// IMP=0x0020000000004b9a
@property(readonly, nonatomic) AXElement *currentFocusElement;
@property(readonly, nonatomic) AXElement *applicationForHostFocusSystem;
@property(readonly, nonatomic) AXElement *elementForRemoteFocusSystem;
@property(readonly, nonatomic) _Bool applicationIsExtension;
@property(readonly, nonatomic) _Bool hasRemoteFocusSystem;
@property(readonly, nonatomic) _Bool isSpacer;
@property(readonly, nonatomic) struct CGSize elementLabelContainerSize;
@property(readonly, nonatomic) struct CGRect elementFrame;
@property(readonly, nonatomic) NSString *elementName;
@property(retain, nonatomic) NSString *typeaheadQueryString;
@end
