//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKAppDocument, IKViewElement, NSArray, NSError, NSString, VSViewModel;
@protocol VSAppDocumentControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSAppDocumentController : NSObject
{
    IKAppDocument *_appDocument;	// 8 = 0x8
    NSArray *_filteredButtonLockupElements;	// 16 = 0x10
    id <VSAppDocumentControllerDelegate> _delegate;	// 24 = 0x18
    VSViewModel *_viewModel;	// 32 = 0x20
    NSError *_viewModelError;	// 40 = 0x28
    IKViewElement *_templateElement;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000028e57
@property(retain, nonatomic) IKViewElement *templateElement; // @synthesize templateElement=_templateElement;
@property(retain, nonatomic) NSError *viewModelError; // @synthesize viewModelError=_viewModelError;
@property(retain, nonatomic) VSViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <VSAppDocumentControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *filteredButtonLockupElements; // @synthesize filteredButtonLockupElements=_filteredButtonLockupElements;
@property(retain, nonatomic) IKAppDocument *appDocument; // @synthesize appDocument=_appDocument;
- (void)userInterfaceStyleDidUpdate;	// IMP=0x0000000000028a64
- (void)_notiftyDidFailToUpdateViewModelWithError:(id)arg1;	// IMP=0x00000000000289ea
- (void)_notiftyDidUpdateViewModel:(id)arg1;	// IMP=0x0000000000028970
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000028512
- (id)_imageItemProviderWithImageElement:(id)arg1;	// IMP=0x00000000000284a5
- (void)_stopObservingViewModel:(id)arg1;	// IMP=0x000000000002842c
- (void)_startObservingViewModel:(id)arg1;	// IMP=0x00000000000283a7
- (id)_getSupportedButtonTextsforTemplate:(id)arg1 supportedCount:(unsigned long long)arg2;	// IMP=0x0000000000027fcd
- (_Bool)_updateViewModel:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000279e9
- (id)_newViewModel;	// IMP=0x00000000000279d8
- (_Bool)document:(id)arg1 evaluateStyleMediaQuery:(id)arg2;	// IMP=0x00000000000278f8
- (void)documentDidUpdate:(id)arg1;	// IMP=0x00000000000276f6
- (void)documentNeedsUpdate:(id)arg1;	// IMP=0x0000000000027651
- (void)dealloc;	// IMP=0x00000000000275db
- (id)initWithAppDocument:(id)arg1;	// IMP=0x000000000002748f
- (id)init;	// IMP=0x0000000000027420

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

