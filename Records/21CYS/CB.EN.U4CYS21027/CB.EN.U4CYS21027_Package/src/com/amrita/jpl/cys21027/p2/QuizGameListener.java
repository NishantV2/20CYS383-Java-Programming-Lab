package com.amrita.jpl.cys21027.p2;

public interface QuizGameListener {
    void onQuestionAsked(String question);
    void onAnswerEvaluated(boolean isCorrect);
}
