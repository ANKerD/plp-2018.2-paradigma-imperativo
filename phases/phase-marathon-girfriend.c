void phase_marathon_girfriend(struct game *gm){
	struct phase *ph = createPhase("A maratona dos sertoes", 4);

		struct day *dy = createDay("Primeiro dia de treinos - você acorda e vai para a UFCG assistir a aula de estruturas de dados", 3);

			struct mission *msn = createMission("A aula comecou - prof. Dalbas explica a árove vermelho e preta, voce fia na duvida sobre a parte das insercoes", 3);

				struct action *act = createAction("Levanta a mão, espera ele te notar e pergunta sobre\n\tessas regras malucas que esses russos inventaram", "Ele te nota, responde calmamente e voce entende perfeitamente", +1, 0, 0, +7);
				addActionToMission(msn, act);

				act = createAction("Interrompe a explicacao, explica o problema que esta tendo \n\te solicita que o prof explique melhor como que essa coisa funciona", "Dalbas não gostou de ser interrompido. Voce leva um esporro \n\tna frente da turma toda e ele explica resmungando. Voce entende uma parte. \n\tainda restam duvidas mas voce decide nao incomodar mais", -2, 0, 0, +4);
				addActionToMission(msn, act);

				act = createAction("Voce acha que esse assunto nunca vai te fazer falta resolve\n\tse aconchegar melhor na cadeira e tirar uma soneca por que pqp,\n\taula de 8h? isso nao e coisa de gente", "voce dorme como um condenado e acorda no fim da aula as energias revigoradas", +2, 0, +7, -3);
				addActionToMission(msn, act);

			addMissionToDay(dy, msn);

			msn = createMission("Saindo da aula voce encontra com Maria Joaquina, sua tao amada namorada. \n\t ela te pergunta onde vao almocar", 3);

				act = createAction("Bora pro estaurante universitario, mesmo com aquela fila e nao sendo uma \n\t comida gourmet, eh de graca acima de tudo.", "A maria Joaquina faz cara feia mas aceita ir para lá com Voce", -3, 0, -3, 0);
				addActionToMission(msn, act);

				act = createAction("Vamo comer aquele pastelao la de seu olavo.", "A maria Joaquina reluta em aceitar ate pq isso nao e comida\n\t de almoco mas aquele pastel e muito bom", 3, -2, +3, 0);
				addActionToMission(msn, act);

				act = createAction("Acabei de ganhar minha mesada. Vamos comer aquele meio almoco top\n\t", "A Maria Joaquina aceita com um sorriso brilhante. Voce depois\n\t se da conta do rombo que fez na sua carteira e diz pra si proprio \n\tque vai ser mais responsavel com as financas", 3, -2, +3, 0);
				addActionToMission(msn, act);

			addMissionToDay(dy, msn);

			msn = createMission("Voltando a sequencia de Estudo, você possui uma aula de LPT,\n\tno entando, possui uma prova que se aproxima na proxima semana.\n\tDesse modo, voce:", 3);

				act = createAction("Faltar essa aula, indo estudar na biblioteca para prova \n\t da semana que vem.", "Voce encontrou mais dois amigos que fizeram o mesmo.\n\tPor sorte, o estudo foi positivo, mas os gastos em cafe e xerox foram rasoaveis.", +3, -4, -3, +3);
				addActionToMission(msn, act);

				act = createAction("Enfrentar a aula, mesmo com sono e com assunto prova proxima semana.", "A falta de descanso, e aumento de fome,\n\t resultou em uma aula nao tao produtiva, mas voce ganhou presenca.", -3, 0, 0, +1);
				addActionToMission(msn, act);

				act = createAction("Ir para aula, mas antes passarei na cantina\n\tpara revigorar os animos e assistir aula.", "Apesar de nao estudar para prova da semana que vem\n\t foi possivel tirar proveito da aula.", +2, -2, +2,+1);
				addActionToMission(msn, act);

			addMissionToDay(dy, msn);
		addDayToPhase(ph, dy);
	addPhaseToGameLoop(gm, ph);
}
