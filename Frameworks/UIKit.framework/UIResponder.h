/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIResponder, NSUndoManager, UIView;

@interface UIResponder : NSObject  {
}

@property(retain,readonly) UIView * inputView;
@property(retain,readonly) UIView * inputAccessoryView;
@property(readonly) UIResponder * _editingDelegate;
@property(readonly) UIResponder * _responderForEditing;
@property(readonly) NSUndoManager * undoManager;


- (BOOL)_requiresKeyboardResetOnReload;
- (id)inputView;
- (id)inputAccessoryView;
- (void)motionCancelled:(int)arg1 withEvent:(id)arg2;
- (id)_window;
- (BOOL)canBecomeFirstResponder;
- (id)_responderForEditing;
- (BOOL)_shouldUseKeyWindowStack;
- (void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)canResignFirstResponder;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2;
- (void)_handleKeyEvent:(struct __GSEvent { }*)arg1;
- (id)textInputView;
- (id)_previousKeyResponder;
- (void)_becomeFirstResponderAndMakeVisible;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)reloadInputViews;
- (id)_keyboardResponder;
- (void)_controlMouseUp:(struct __GSEvent { }*)arg1;
- (void)scrollWheel:(struct __GSEvent { }*)arg1;
- (void)_finishResignFirstResponder;
- (void)reloadInputViewsWithoutReset;
- (id)_editingDelegate;
- (id)_targetForAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)_isPinningInputViews;
- (id)nextFirstResponder;
- (id)_deepestDefaultFirstResponderMatching:(id)arg1;
- (id)_deepestDefaultFirstResponder;
- (void)_beginPinningInputViews;
- (void)_endPinningInputViews;
- (BOOL)isFirstResponder;
- (void)_becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)_resignFirstResponder;
- (void)_controlMouseDragged:(struct __GSEvent { }*)arg1;
- (void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2;
- (void)mouseDragged:(struct __GSEvent { }*)arg1;
- (id)_responderForBecomeFirstResponder;
- (BOOL)_containsResponder:(id)arg1;
- (BOOL)_isTransitioningFromView:(id)arg1;
- (void)_controlMouseDown:(struct __GSEvent { }*)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)gestureStarted:(struct __GSEvent { }*)arg1;
- (void)gestureChanged:(struct __GSEvent { }*)arg1;
- (void)gestureEnded:(struct __GSEvent { }*)arg1;
- (id)firstResponder;
- (void)_setIsSettingFirstResponder:(BOOL)arg1;
- (id)_nextFirstResponderIfAllowed;
- (BOOL)becomeFirstResponder;
- (BOOL)_requiresKeyboardWhenFirstResponder;
- (id)nextResponder;
- (id)_nextKeyResponder;
- (void)_clearBecomeFirstResponderWhenCapable;
- (BOOL)_becomeFirstResponderWhenPossible;
- (BOOL)_containedInAbsoluteResponderChain;
- (BOOL)_isRootForKeyResponderCycle;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (void)mouseExited:(struct __GSEvent { }*)arg1;
- (void)mouseEntered:(struct __GSEvent { }*)arg1;
- (void)mouseMoved:(struct __GSEvent { }*)arg1;
- (void)motionBegan:(int)arg1 withEvent:(id)arg2;
- (void)motionEnded:(int)arg1 withEvent:(id)arg2;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (void)_windowResignedKey;
- (void)_windowBecameKey;
- (BOOL)_promoteDeepestDefaultFirstResponder;
- (void)_setFirstResponder:(id)arg1;
- (BOOL)_isSettingFirstResponder;
- (id)_firstResponder;
- (id)undoManager;
- (id)defaultFirstResponder;
- (BOOL)_shouldUseDefaultFirstResponder;
- (BOOL)_shouldUseNextFirstResponder;
- (int)_accessibilityLineEndPosition;
- (int)_accessibilityLineStartPosition;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_accessibilityLineRangeForPosition:(unsigned int)arg1;
- (id)_accessibilityTextOperations;
- (id)_accessibilityTextViewTextOperationResponder;
- (BOOL)_accessibilityHasTextOperations;
- (int)_accessibilityLinePosition:(BOOL)arg1;

@end